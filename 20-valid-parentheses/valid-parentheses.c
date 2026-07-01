#define MAXSIZE 10000
char stack[MAXSIZE];
int top;
void push(char x);
char pop();

bool isValid(char* s) {
    int i=0;
    top=-1;
    while(s[i]!='\0'){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            push(s[i]);
          
        }
        else if(s[i]==')'||s[i]=='}'||s[i]==']'){
            char r=pop();
            if(r=='\0'){return false;}
            if((s[i]==')'&& r!='(')||(s[i]=='}'&& r!='{')||(s[i]==']'&& r!='[')){return false;}
        }
        i++;

    }
    return top==-1;
}

void push(char x){
    if(top==MAXSIZE-1){
        printf("Stack Overflow");
        return;
    
    }
    else{
        stack[++top]=x;
    }
}

char pop(){
    if(top==-1){
        printf("Stack UnderFLOW");
        return '\0';

    }
    else{
        return stack[top--];
    }
}