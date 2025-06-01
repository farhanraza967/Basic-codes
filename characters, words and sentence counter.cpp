#include<iostream> 
#include<conio.h> 
using namespace std; 
int main(void) { 
int ch_cnt=0,word_cnt=0,sentence_cnt=0; 
char chinput; 
cout<<"\nEnter any text,"<<" press ESC to stop:\n"; 
chinput=getche(); 
 while(chinput!=27){       
ch_cnt=ch_cnt+1; 
if(chinput==' ') 
{                
word_cnt=word_cnt+1; 
} 
if((chinput=='.')||(chinput=='?')) 
{ 
sentence_cnt=sentence_cnt+1; 
word_cnt=word_cnt+1; 
} 
if(chinput==13)      
{ 
cout<< endl; 
} 
chinput=getche(); 
} 
ch_cnt=ch_cnt-1;       
cout<<"\nYou entered "<<ch_cnt<< " character(s), "<<word_cnt<< " word(s) and "<<sentence_cnt<< " sentence(s)."; 
getch(); 
return 0; 
}
