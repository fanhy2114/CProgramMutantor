//2017-8-5
//Lexical_Analyzer and File_Mutater
//@Hongyu Fan
//The max num of lexical units is max_num:100000
#include<iostream>
#include<fstream>
#include<stdio.h>
#include<string>
#include<iomanip>
#include<time.h>
#include<stdint.h>
#define max_num 100000
using namespace std;

FILE *fp_log;
/*
 * Type_kinds[] is used to describe all the attribute appeared in C program
 * The Var lines_count is used to record how many lines original file contains
 * The array Lines_Mark[] is used to record whether a line has been changed
 * The array line_base is used to record test.c's functions' original location in original.c
 * The var line_base_count can represent the number of functions from test.c
*/
const string Type_kinds[]={"Null","Key_word","Identifier","Single_Operator","Double_Operator","Number","Space",
                           "Enter","Tab","Unknow_Char","Container"};
int lines_count=1;
int Lines_Mark[max_num]={0};

int line_base[10]={0};
int line_base_count=0;
/*
 * int mutation_count is used to declare how many mutation file is wanted
 * Mutation_File[] and Final_File[] need to be initialized by init() program
 * Mutation_File[] include temporary files , these files need to be deleted before program exit
 * Final_File[] include all the final mutation files , these files will be used in future time.
*/
static const int mutation_count=9;
string Mutation_File[mutation_count]={""};
string Final_File[mutation_count]={""};

//All the keyword mentioned,totally 37.
int keyword_num=105;
const string KeyWord[]={
    "int","unsigned int","signed int","short","long","float","double","for","while","do",
    "if","else","return","break","continue","auto","case","const","default","enum",
    "extern","goto","sizeof","static","struct","switch","void","union","unsigned short","signed short",
    "unsigned long","signed long","typedef","char","unsigned char","string","long long","int32_t","s32","int16_t",
    "s16","int8_t","s8","sc32","sc16","sc8","vs32","vs16","vs8","vsc32",
    "vsc16","vsc8","u32","u16","u8","uc32","uc16","uc8","uint32_t","uint16_t",
    "uint8_t","vu32","vu16","vu8","vuc32","vuc16","vuc8","float_t","double_t","int64_t",
    "uint64_t","INT8_MIN","INT16_MIN","INT32_MIN","INT8_MAX","INT16_MAX","INT32_MAX","INT64_MAX","UINT8_MAX","UINT16_MAX",
    "UINT32_MAX","UINT64_MAX","int_least8_t","int_least16_t","int_least32_t","int_least64_t","uint_least8_t","uint_least16_t",
    "uint_least32_t","uint_least64_t","int_fast8_t","int_fast16_t","int_fast32_t","int_fast64_t","uint_fast8_t","uint_fast16_t",
    "uint_fast32_t","uint_fast64_t","intptr_t","uintptr_t","intmax_t","uintmax_t","bool","__u8","__u16","__u32","__u64"
};

int change_count=19;
const string Changable[]={
    "int","unsigned int","signed int","short","long","float","double",
    "auto","const","static","void","unsigned short","signed short",
    "unsigned long","signed long","char","unsigned char","string","long long"
};
//All the special symbol  mentioned
const char Spec_Symbol[]={
    '+','-','*','/','(',')','[',']',';','.','<',
    '=',':',',','&','|','>','!','?','{','}'
};

const string Spec_Operator[]={
    "+=","-=","*=","/=",">>","<<","&&","||",">=","<=",
    "!=","?:","==","//","/*","*/","**","***"
};

/*
 *Type_Mutation contains all the types of mutation,mutation_mode is index of this array
*/
const string Type_Mutation[]={"/* dec mutation */","/* single_op mutation */","/* double_op mutation */",
                              "/* name mutation */","/* type mutation */"};
int mutation_mode=0;

//struct about the token
/* pId:
 * Null:0   Key_words:1  Identifier:2   Single_Operator:3    Double_Operator:4
 * Number:5    Space:6      Enter:7      Tab:8    Unknow_Char:9
 * type:all the types is included in Type_kinds[]
 * lines_base is used to record function's object position in original.c file
 * lines_mark is used to record which line a unit belongs to inside the function, its a logic position
 *
 * type: like Key_Word,Number
 * value: like "a","b"," "
 * kind: like int,float
 *
 * Token_List[] record all the tokens provided by Lexical_Analyzer
 * tab_count is number of tokens
 *
 * Function show() used to observe result in perceptual intuition
 * */
int tab_count=0;
struct Token{
    int pId;
    string type;
    string value;
    string kind;
    int lines_base;
    int lines_mark;
    void set(int id,string type,string value,int lines_mark){
        this->pId=id;
        this->type=type;
        this->value=value;
        this->lines_mark=lines_mark;
    }
    void set_base(int lines_base)
    {
        this->lines_base=lines_base;
    }
    void set_kind(string kind)
    {
        this->kind=kind;
    }
    Token(){
        this->pId=0;
        this->type="";
        this->value="";
        this->kind="";
        this->lines_base=0;
        this->lines_mark=0;
    }
    Token(int id,string type,string value,int lines_mark){
        this->pId=id;
        this->type=type;
        this->value=value;
        this->lines_mark=lines_mark;
    }
}Token_List[max_num];

void show()
{
    for(int i=0;i<tab_count;i++)
    {
        string temp_str=Token_List[i].value;
        if(temp_str==" ")
            continue;
        else if(temp_str=="\n")
            temp_str="\\n";
        else if(temp_str=="\t")
            temp_str="\\t";
        cout<<"($"<<std::left<<setw(20)<<Token_List[i].type<<","<<std::left<<setw(40)<<temp_str<<","<<std::left<<setw(15)<<Token_List[i].kind<<",";
        cout<<std::left<<setw(10)<<Token_List[i].pId<<","<<std::left<<setw(6)<<Token_List[i].lines_mark<<")"<<endl;
    }
    cout<<"Lexical_Analysis is succceed! "<<endl;
    cout<<"There's totally  "<<tab_count<<"  tokens"<<endl;
}
/*
 *  bool IsEnd(char);This function return flag about whether input file is over;
 *  bool IsLetter(char); This function return whether a char var is letter
 *  bool IsNumber(char); This function return whether a char var represent a number
 *  bool IsSpecSymbol(char); This function return whether a char var is a single symbol,like'+'
 *  bool IsSpecOperator(string); This function return whether a string var is a double operator,like "+="
 *  bool IsKeyWord(string); This function return whether a string var is a keyword
 *  bool IsSpace(char); This function return whether a char var is Space
 *  bool IsTab(char); This function return whether a char var is Tab
 *  bool IsEnter(char); This function return whether a char var is Enter
 *  bool IsChangable(string);This function is used to judge whether a string var can be mutated
*/
bool IsEnd(char c)
{
    if(c=='@')
        return true;
    return false;
}

bool IsLetter(char c){
    if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))
        return true;
    else if(c=='_')
        return true;
    else
        return false;
}


bool IsNumber(char c){
    if(c>='0'&&c<='9')
        return true;
    else
        return false;
}

bool IsSpecSymbol(char c){
    int len=sizeof(Spec_Symbol)/sizeof(char);
    for (int i=0;i<len;i++)
        if(c==Spec_Symbol[i])
            return true;
    return false;
}

bool IsSpecOperator(string str){
    int len = Spec_Operator->length();
    for(int i=0;i<len;i++) {
        if (str == Spec_Operator[i])
            return true;
    }
    return false;
}

bool IsKeyWord(string s){
    int len=keyword_num;
    for(int i=0;i<len;i++)
        if(s.compare(KeyWord[i])==0)
            return true;
    return false;
}

bool IsSpace(char c)
{
    if(c==' ')
        return true;
    return false;
}

bool IsTab(char c)
{
    if(c=='\t')
        return true;
    return false;
}

bool IsEnter(char c)
{
    if(c=='\r'||c=='\n')
        return true;
    else
        return false;
}

bool IsChangable(string str)
{
    for(int i=0;i<change_count;i++)
        if(str==Changable[i])
            return true;
    return false;
}

//This function decide which state to go
int CheckState(char c)
{
    if(IsEnd(c))
            return 0;
    else if(IsLetter(c))
            return 1;
    else if(IsNumber(c))
            return 2;
    else if(IsSpecSymbol(c))
            return 3;
    else if(IsSpace(c))
            return 4;
    else if(IsEnter(c))
            return 5;
    else if(IsTab(c))
            return 6;
    else
            return 7;
}

/*
 *  bool open_original_file(string file_name);open input file
 *  bool write_mutate_file(string file_name);write mutate file
 *  void init_line_base() is called only by init(), use to check object position of all the functions to be mutated
 *  bool init() many var is initialized by this function
*/
bool open_original_file(string file_name)
{
    if(freopen(file_name.c_str(),"r",stdin)==nullptr)
    {
        if(fp_log)
            fprintf(fp_log,"Fail to open original file , Program exit incorrectly.\n\n");
        return false;
    }
    return true;
}

bool write_mutate_file(string file_name)
{
    if(freopen(file_name.c_str(),"w",stdout)==nullptr)
    {
        if(fp_log)
            fprintf(fp_log,"Fail to write mutate file , Program exit incorrectly.\n\n");
        return false;
    }
    for(int i=0;i<tab_count;i++)
        cout<<Token_List[i].value;
    return true;
}
void init_line_base()
{
    fstream fp1,fp2;
    string str1,str2;
    fp1.open("original.c",ios::in);
    fp2.open("test.c",ios::in);
    int count=1;
    int lines_num=0;
    while(1)
    {
        getline(fp2,str2);
        if(str2=="@")
            break;
        while(getline(fp1,str1))
        {
            if(str1!=str2)
            {
                count++;
                continue;
            }
            else
            {
                break;
            }
        }
        line_base[line_base_count++]=count-lines_num;
        if(fp_log)
            fprintf(fp_log,"The function /*  %s  */  is in line : %d\n\n",str1.c_str(),count);
        while(getline(fp2,str2))
        {
            lines_num++;
            if(str2=="$"||str2=="@")
            {
                lines_num++;
                count++;
                break;
            }
        }
    }
    fp1.close();
    fp2.close();
}

bool init()
{
    fp_log=fopen("log.txt","w+");
    if(fp_log)
        fprintf(fp_log,"Now Log is Recording : \n\n");
    init_line_base();
    for(int i=0;i<mutation_count;i++)
    {
        Mutation_File[i]="temp_mutate_"+to_string(i)+".c";
        Final_File[i]="mutate_"+to_string(i)+".c";
    }
    string input_file="test.c";
    if(!open_original_file(input_file))
        return false;
    return true;
}

/*
 * int scanner(); scanner is Lexical_Analyzer which can decompose C program into token list, providing convenience
 * for future analysis and mutation.
*/
int scanner()
{
    char  CurrentChar;
    int state;
    while((scanf("%c",&CurrentChar))!=EOF)
    {
        L0: state=CheckState(CurrentChar);
        if(state==0)
        {
            Token_List[tab_count++].set(max_num,"End","@",lines_count++);
            for(int i=0;i<(tab_count-1);i++)
            {
                if((Token_List[i].type==Type_kinds[2])&&((Token_List[i+1].value=="(")||(Token_List[i+1].value=="[")))
                {
                    Token_List[i].set_kind("unchanged");
                    if(Token_List[i+1].value=="(")
                        Token_List[i].type=Type_kinds[10];
                }
                if(Token_List[i].kind=="struct")
                    Token_List[i].set_kind("unchanged");
                if(i>0)
                {
                    if(Token_List[i].type==Type_kinds[2]&&((Token_List[i-1].value=="*")||(Token_List[i-1].value=="**")||(Token_List[i-1].value=="***")))
                    {
                        Token_List[i].set_kind("unchanged");
                        string temp_str=Token_List[i].value;
                        for(int j=i+1;j<tab_count;j++)
                            if(Token_List[j].value==temp_str)
                                Token_List[j].set_kind("unchanged");
                    }
                    if(Token_List[i].type==Type_kinds[2]&&Token_List[i-1].type==Type_kinds[5])
                        Token_List[i].set_kind("unchanged");
                }
            }
            int count=0;
            for(int i=0;i<tab_count;i++)
            {
                if(Token_List[i].value=="$")
                {
                    count++;
                    continue;
                }
                else
                    Token_List[i].lines_base=line_base[count];
            }
            for(int i=0;i<tab_count;i++)
                if(Token_List[i].type==Type_kinds[2]&&(!IsChangable(Token_List[i].kind)))
                    Token_List[i].set_kind("unchanged");
            return 0;
        }
        switch(state)
        {
        case 1:
            {
                string str;
                while(IsLetter(CurrentChar)||IsNumber(CurrentChar))
                {
                    str+=CurrentChar;
                    scanf("%c",&CurrentChar);
                }
                if((str=="unsigned")&&(IsSpace(CurrentChar)))
                {
                    str+=CurrentChar;
                    scanf("%c",&CurrentChar);
                    while(IsLetter(CurrentChar))
                    {
                        str+=CurrentChar;
                        scanf("%c",&CurrentChar);
                    }
                }
                if(IsKeyWord(str))
                    Token_List[tab_count++].set(1,Type_kinds[1],str,lines_count);
                else
                {
                    Token_List[tab_count++].set(2,Type_kinds[2],str,lines_count);
                    int i=tab_count-1;
                    for(;i>0;i--)
                    {
                        if(Token_List[i].value=="$")
                            break;
                    }
                    for(;i<tab_count;i++)
                        if(Token_List[i].value==str)
                        {
                            if(i!=(tab_count-1))
                            {
                                Token_List[tab_count-1].set_kind(Token_List[i].kind);
                                break;
                            }
                            else
                            {
                                for(int j=i-1;j>0;j--)
                                {
                                    if((Token_List[j].type==Type_kinds[1])&&(Token_List[j].lines_mark==Token_List[i].lines_mark))
                                    {
                                        Token_List[i].set_kind(Token_List[j].value);
                                        break;
                                    }
                                    else if(Token_List[j].lines_mark<Token_List[i].lines_mark)
                                    {
                                        Token_List[i].set_kind("unchanged");
                                        Lines_Mark[Token_List[i].lines_mark]=1;
                                        break;
                                    }
                                }
                            }
                        }
                }
                goto L0;
            }
        case 2:
            {
                string str;
                while(IsNumber(CurrentChar))
                {
                    str+=CurrentChar;
                    scanf("%c",&CurrentChar);
                }
                Token_List[tab_count++].set(5,Type_kinds[5],str,lines_count);
                goto L0;
            }
        case 3:
            {
                string str="";
                str+=CurrentChar;
                char NextChar;
                scanf("%c",&NextChar);
                if(CurrentChar=='-'&&IsNumber(NextChar))
                {
                    str+=NextChar;
                    Token_List[tab_count++].set(5,Type_kinds[5],str,lines_count);
                    scanf("%c",&CurrentChar);
                    goto L0;
                }
                else if(IsSpecSymbol(NextChar))
                {
                    string temp_str=str+NextChar;

                    bool s = IsSpecOperator(temp_str);
                    cout<<temp_str<<endl;
                    if(s)
                    {
                        str+=NextChar;
                        Token_List[tab_count++].set(4,Type_kinds[4],str,lines_count);
                        scanf("%c",&CurrentChar);
                        goto L0;
                    }
                    else
                    {
                        Token_List[tab_count++].set(3,Type_kinds[3],str,lines_count);
                        CurrentChar=NextChar;
                        goto L0;
                    }
                }
                else
                {
                    Token_List[tab_count++].set(3,Type_kinds[3],str,lines_count);
                    CurrentChar=NextChar;
                    goto L0;
                }
            }
        case 4:
            {
                string str=" ";
                Token_List[tab_count++].set(6,Type_kinds[6],str,lines_count);
                scanf("%c",&CurrentChar);
                goto L0;
            }
        case 5:
            {
                string str="\n";
                Token_List[tab_count++].set(7,Type_kinds[7],str,lines_count++);
                scanf("%c",&CurrentChar);
                goto L0;
            }
        case 6:
            {
                string str="\t";
                Token_List[tab_count++].set(8,Type_kinds[8],str,lines_count);
                scanf("%c",&CurrentChar);
                goto L0;
            }
        case 7:
            {
                string str;
                str+=CurrentChar;
                Token_List[tab_count++].set(9,Type_kinds[9],str,lines_count);
                if(scanf("%c",&CurrentChar)!=EOF)
                    goto L0;
                else
                    return 0;
            }
        default:
            break;
        }
    }
    return 0;
}

/*
 * int name_sel_random(int) and int check_keywords(int) and name_mutater();
 * This two functiosn are used to generate name mutation
 *
 * int single_op_sel_random(int) and int single_op_mutater();
 * This two functions are used to generate single operator mutation
 *
 * int double_op_sel_random(int) and int double_op_mutater();
 * This two functions are used to generate double operator mutation
 *
 * int dec_sel_random(int) and int dec_mutater();
 * This two functions are used to generate Decimal Mutation
 *
 */

int name_sel_random(int num)
{
    int line=Token_List[num].lines_mark;
    int a[100]={-1};
    int count=0;
    a[count++]=num;
    for(int i=num+1;i<tab_count;i++)
        if((Token_List[i].lines_mark==line)&&(Token_List[i].type==Type_kinds[2]))
            a[count++]=i;
    return a[rand()%count];
}


int single_op_sel_random(int num)
{
    int line=Token_List[num].lines_mark;
    int a[100]={-1};
    int count=0;
    a[count++]=num;
    for(int i=num+1;i<tab_count;i++)
        if((Token_List[i].lines_mark==line)&&(Token_List[i].type==Type_kinds[3]))
            a[count++]=i;
    return a[rand()%count];
}

int double_op_sel_random(int num)
{
    int line=Token_List[num].lines_mark;
    int a[100]={-1};
    int count=0;
    a[count++]=num;
    for(int i=num+1;i<tab_count;i++)
        if((Token_List[i].lines_mark==line)&&(Token_List[i].type==Type_kinds[4]))
            a[count++]=i;
    return a[rand()%count];
}

int dec_sel_random(int num)
{
    int line=Token_List[num].lines_mark;
    int a[100]={-1};
    int count=0;
    a[count++]=num;
    for(int i=num+1;i<tab_count;i++)
        if((Token_List[i].lines_mark==line)&&(Token_List[i].type==Type_kinds[5]))
            a[count++]=i;
    return a[rand()%count];
}


int dec_mutater()
{
    int temp_num[]={-2,-1,1,2};
    for(int i=0;i<tab_count;i++)
    {
        if((Token_List[i].type==Type_kinds[5])&&(Lines_Mark[Token_List[i].lines_mark]==0))
        {
            Lines_Mark[Token_List[i].lines_mark]=1;
            i=dec_sel_random(i);
            int value=atoi(Token_List[i].value.c_str());
            int sel=rand()%4;
            value+=temp_num[sel];
            if(fp_log)
                fprintf(fp_log,"In line %2d , %2s is replaced by %2d .\n\n\n",Token_List[i].lines_mark+Token_List[i].lines_base-1,Token_List[i].value.c_str(),value);
            Token_List[i].value=to_string(value);
            return 1;
        }
    }
    return 0;
}

int single_op_mutater()
{
    for(int i=0;i<tab_count;i++)
    {
        if((Token_List[i].type==Type_kinds[3])&&(Lines_Mark[Token_List[i].lines_mark]==0))
        {
            i=single_op_sel_random(i);
            string value=Token_List[i].value;
            if(value=="+"||value=="-"||value=="/")
            {
                Lines_Mark[Token_List[i].lines_mark]=1;
                string temp_op[]={"+","-","*","/"};
                int sel=rand()%4;
                string temp_str=temp_op[sel];
                while(temp_str==value)
                {
                    sel=rand()%4;
                    temp_str=temp_op[sel];
                }
                if(fp_log)
                    fprintf(fp_log,"In line %2d , %2s is replaced by %2s .\n\n\n",Token_List[i].lines_mark+Token_List[i].lines_base-1,value.c_str(),temp_str.c_str());
                Token_List[i].value=temp_str;
                return 1;
            }
            else if(value=="|"||value==">"||value=="<")
            {
                Lines_Mark[Token_List[i].lines_mark]=1;
                string temp_op[]={"+","-","*","/","&","|",">","<"};
                int sel=rand()%8;
                string temp_str=temp_op[sel];
                while(temp_str==value)
                {
                    sel=rand()%8;
                    temp_str=temp_op[sel];
                }
                if(fp_log)
                    fprintf(fp_log,"In line %2d , %2s is replaced by %2s .\n\n\n",Token_List[i].lines_mark+Token_List[i].lines_base-1,value.c_str(),temp_str.c_str());
                Token_List[i].value=temp_str;
                return 1;
            }
            else if(value=="!")
            {
                Lines_Mark[Token_List[i].lines_mark]=1;
                if(fp_log)
                    fprintf(fp_log,"In line %2d , %2s is replaced by %2s .\n\n\n",Token_List[i].lines_mark+Token_List[i].lines_base-1,Token_List[i].value.c_str(),"");
                Token_List[i].value="";
                return 1;
            }
        }
    }
    return 0;
}


int double_op_mutater()
{
    for(int i=0;i<tab_count;i++)
    {
        if((Token_List[i].type==Type_kinds[4])&&(Lines_Mark[Token_List[i].lines_mark]==0))
        {
            i=double_op_sel_random(i);
            string value=Token_List[i].value;
            if(value=="+="||value=="-="||value=="*="||value=="/=")
            {
                Lines_Mark[Token_List[i].lines_mark]=1;
                string temp_op[]={"+=","-=","*=","/="};
                int sel=rand()%4;
                string temp_str=temp_op[sel];
                while(temp_str==value)
                {
                    sel=rand()%4;
                    temp_str=temp_op[sel];
                }
                if(fp_log)
                    fprintf(fp_log,"In line %2d , %2s is replaced by %2s .\n\n\n",Token_List[i].lines_mark+Token_List[i].lines_base-1,value.c_str(),temp_str.c_str());
                Token_List[i].value=temp_str;
                return 1;
            }
            if(value==">>"||value=="<<"||value=="&&"||value=="||"||value=="<="||value==">="||value=="!="||value=="==")
            {
                Lines_Mark[Token_List[i].lines_mark]=1;
                string temp_op[]={"!=","==",">>","<<","&&","||","<=",">="};
                int sel=rand()%8;
                string temp_str=temp_op[sel];
                while(temp_str==value)
                {
                    sel=rand()%8;
                    temp_str=temp_op[sel];
                }
                if(fp_log)
                    fprintf(fp_log,"In line %2d , %2s is replaced by %2s .\n\n\n",Token_List[i].lines_mark+Token_List[i].lines_base-1,value.c_str(),temp_str.c_str());
                Token_List[i].value=temp_str;
                return 1;
            }
        }
    }
    return 0;
}

//to check whether a line contains keywords
int check_keywords(int index)
{
    int line=Token_List[index].lines_mark;
    for(int i=0;i<tab_count;i++)
    {
        if(Token_List[i].lines_mark==line)
        {
            if(IsKeyWord(Token_List[i].value))
                return 1;
        }
        else if(Token_List[i].lines_mark>line)
            break;
    }
    return 0;
}


int name_mutater()
{
    for(int i=0;i<tab_count;i++)
    {
        if((Token_List[i].type==Type_kinds[2])&&(Lines_Mark[Token_List[i].lines_mark]==0)&&(Token_List[i].kind!="unchanged"))
        {
            if(check_keywords(i)==0)
            {
                i=name_sel_random(i);
                int j=i;
                while((Token_List[j].lines_mark==Token_List[i].lines_mark))
                {
                    j--;
                }
                for(;j>0;j--)
                {
                    if(Token_List[j].type==Type_kinds[10])
                        break;
                    if((Token_List[i].kind!="unchanged")&&(Token_List[j].kind==Token_List[i].kind)&&(Token_List[i].value!=Token_List[j].value)&&(Token_List[j].type==Token_List[i].type)&&(Lines_Mark[Token_List[j].lines_mark]==0))
                    {
                        string temp_str=Token_List[i].value;
                        Token_List[i].value=Token_List[j].value;
                        Lines_Mark[Token_List[i].lines_mark]=1;
                        if(fp_log)
                            fprintf(fp_log,"In line %2d , %2s is replaced by %2s .\n\n\n",Token_List[i].lines_mark+Token_List[i].lines_base-1,temp_str.c_str(),Token_List[i].value.c_str());
                        return 1;
                    }
                }
            }
        }
    }
   return 0;
}

int type_mutater()
{
    const string int_mutate[]={"int","short","long","unsigned int","signed int","unsigned short",
                               "signed short","unsigned long","signed long"};
    const string float_mutate[]={"float","double"};
    int mark=0;
    for(int i=0;i<tab_count;i++)
    {
        for(int j=0;j<9;j++)
            if((Token_List[i].value==int_mutate[j])&&(Lines_Mark[Token_List[j].lines_mark]!=1))
                mark=1;
        for(int j=0;j<2;j++)
            if((Token_List[i].value==int_mutate[j])&&(Lines_Mark[Token_List[j].lines_mark]!=1))
                mark=2;
        if(mark==1)
        {
            int sel=rand()%9;
            while(Token_List[i].value==int_mutate[sel])
            {
                sel=rand()%9;
            }
            Token_List[i].value=int_mutate[sel];
            Lines_Mark[Token_List[i].lines_mark]=1;
            return 1;
        }
        else if(mark==2)
        {
            int sel=rand()%2;
            while(Token_List[i].value==float_mutate[sel])
            {
                sel=rand()%2;
            }
            Token_List[i].value=float_mutate[sel];
            Lines_Mark[Token_List[i].lines_mark]=1;
            return 1;
        }
    }
    return 0;
}

//mutate(int);Call related mutater by parameter mode
int mutate(int mode)
{
    if(mode==0)
        return dec_mutater();
    else if(mode==1)
        return single_op_mutater();
    else if(mode==2)
        return double_op_mutater();
    else if(mode==3)
        return name_mutater();
    else if(mode==4)
        return type_mutater();
    return 2;
}

/*
 * bool file_mutater() control the process, it contains mutation and write files
*/
bool file_mutater()
{
   int back_count=0;
   srand((unsigned)time(nullptr));
   for(int i=0;i<tab_count;i++)
   {
       if((Token_List[i].value=="\"")||(Token_List[i].value=="/*")||(Token_List[i].value=="*/")||(Token_List[i].value=="//")||(Token_List[i].value==":")||(Token_List[i].value=="#")||(Token_List[i].value=="*"))
           Lines_Mark[Token_List[i].lines_mark]=1;
       if(Token_List[i].type==Type_kinds[10])
           Lines_Mark[Token_List[i].lines_mark]=1;
       if(Token_List[i].value=="return")
           Lines_Mark[Token_List[i].lines_mark]=1;
       if(i>0)
       {
           if(Token_List[i].type==Type_kinds[5]&&Token_List[i-1].value=="[")
               Lines_Mark[Token_List[i].lines_mark]=1;
       }
   }
   for(int i=0;i<mutation_count;i++)
   {
       mutation_mode=rand()%4;
       //cout<<"mode:  "<<mutation_mode<<endl;
       if(fp_log)
           fprintf(fp_log,"The %d time(s) mutation is   %-25s : %s is generated :",i,Type_Mutation[mutation_mode].c_str(),Mutation_File[i].c_str());
       int res=mutate(mutation_mode);
       if(res==0)
       {
           if(fp_log)
               fprintf(fp_log,"Mutaion_Mode exist , but no line fit it , try another mode. \n");
           i=i-1;
           back_count++;
           if(back_count>=10)
           {
               if(fp_log)
                   fprintf(fp_log,"There's no ways to continue mutation , programm exit .\n\n");
               return false;
            }
           continue;
       }
       else if(res==1)
           back_count=0;
       else if(res==2)
       {
           if(fp_log)
               fprintf(fp_log,"Fail to Mutate , since there's no  mutation_mode : %d.\n\n",mutation_mode);
           return false;
       }
       if(!write_mutate_file(Mutation_File[i]))
       {
           if(fp_log)
               fprintf(fp_log,"Fail to write mutate file , Program exit incorrectly.\n\n");
           return false;
       }
   }
   if(fp_log)
       fprintf(fp_log,"All temporary mutation files has been generated and write in .\n\n");
   return true;
}

//Write all final mutaion files
void file_writer()
{
    fstream in_file1;
    fstream in_file2;
    fstream out_file;
    for(int i=0;i<mutation_count;i++)
    {
        in_file1.open("original.c",ios::in);
        in_file2.open(Mutation_File[i].c_str(),ios::in);
        out_file.open(Final_File[i].c_str(),ios::out);
        string str_1;
        string str_2;
        while(1)
        {
            getline(in_file2,str_2);
            while(getline(in_file1,str_1))
            {
                if(str_1!=str_2)
                {
                    out_file<<str_1<<endl;
                    continue;
                }
                else
                    break;
            }
            out_file<<str_2<<endl;
            while(getline(in_file2,str_2))
            {
                if(str_2=="$"||str_2=="@")
                    break;
                getline(in_file1,str_1);
                out_file<<str_2<<endl;
            }
            if(str_2=="@")
                break;
        }
        while(getline(in_file1,str_1))
        {
            out_file<<str_1<<endl;
        }
        in_file1.close();
        in_file2.close();
        out_file.close();
        if(fp_log)
            fprintf(fp_log,"Final file  %s has been wirte in .\n\n",Final_File[i].c_str());
    }
    for(int i=0;i<mutation_count;i++)
        remove(Mutation_File[i].c_str());
}


int main()
{
    if(!init())
        return 0;
    int state = scanner();
    cout<<state<<endl;
    if(state)
    {
        cout<<"Lexical_Analyzer is failed"<<endl;
        if(fp_log)
            fprintf(fp_log,"Lexical_Analyzer is failed , Program exit incorrectly\n\n");
        return 0;
    }
    show();
    if(!file_mutater())
        return 0;
    fclose(stdin);
    fclose(stdout);
    file_writer();
    return 0;
}
