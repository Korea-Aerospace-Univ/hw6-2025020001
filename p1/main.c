int main(void)
{
    char arr[10]={};
    char *p, *q;
    char maxchar='\n';
    int maxcount=0;
    
    for(p=arr; p<arr+10; p++) scanf(" %c",p);
    for(p=arr; p<arr+10; p++){
        int index=0;
        for(q=arr; q<arr+10; q++){
            if(*q==*p){
            index++;  
            }
        }
        if(index>maxcount){
            maxcount=index;
            maxchar = *p;
        }
    }
    
    printf("%c %d",maxchar, maxcount);
    return 0;
}
