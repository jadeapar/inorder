//Jadea Parchment this program will state whether an input will be in order or not based on the provided conditions. 


#include<stdio.h>
#include<string.h>//To use string length
#include <ctype.h>//To user character function tolower

// function that checks if word is in order
int in_order(char *word);
//main function that outputs results 
int main(int argc,  char *argv[]){
    // if stament to allow the correct result to be outputed based on the previous conditions 
    if (argc ==  2) {
    if(in_order(argv[1])){
        printf("In order");
    }
    else{
        printf("Not in order");
    }
        
    }
    else{
        printf("Incorrect number of arguments. Usage: ./a.out word");
        }


    return 0;
}
// function that checks if word is in order
int in_order(char *word){
    int in_order = 1;
    int j;
    for(j=0;j<strlen(word)-1;j++){
 //convert variable to lower case
//check if the variables are indeed lower case letters based on their position in the ASCII Table
        if(tolower(word[j])>= 97 && tolower(word[j])<= 122){
            if(tolower(word[j])>tolower(word[j+1])){
                in_order = 0;
                return 0;
            }
        }
        else{
            in_order = 0;
            return 0;
        }

    }
    return in_order;
}
