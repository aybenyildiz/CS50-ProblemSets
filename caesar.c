#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(int argc, string argv[1])
{   
    if (argc==1){
        printf("Usage: ./caesar key\n");
        return 1;
    }
    bool boolean = true;
    for(int i = 0, n = strlen(argv[1]); i < n; i++){
            if(!isdigit(argv[1][i])) { 
               boolean = false;
            }
    }
  
    if (argc!=2 || !boolean){
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    int key = strtol(argv[1], NULL, 10);

    string s = get_string("Plaintext: ");
    printf("Ciphertext: ");
    for(int i = 0, n = strlen(s); i < n; i++){
        if (s[i]>='a' && s[i]<='z'){
            printf("%c", (s[i]-'a'+key)%26 + 'a');
        }
        else if (s[i]>='A' && s[i]<='Z'){
            printf("%c", (s[i]-'A'+key)%26 + 'A');
        }
        else {
            printf("%c", s[i]);
        }
    }
    printf("\n");          
    
}
