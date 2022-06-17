#include<iostream>
#include<dirent.h>

using namespace std;

int main() 
{

    DIR *directory;   // creating pointer of type dirent
    struct dirent *x;   // pointer represent directory stream
    cout<<"Please enter file name with its extension"<<endl;  
    string s;  //declaring string variable
    cin>>s;  // taking string as input or file name with input
    bool  result=false;  //declaring string variable and assign it to false.

    if (( directory= opendir ("/")) != NULL) 
    {      // check if directory  open
    
    while ((x = readdir (directory)) != NULL) 
    {     
        if(s==x->d_name)
        {
            result=true;  //if file found then  assign  result to false.
            break;     // break the loop if file found. 
        }
    }
    closedir (directory); //close directory....  
    }

    if(result)   // if file is present then....
    {
        cout<<"file is present"<<endl;   
    }
    else    //if file is not present....
    {
        cout<<"file is not present"<<endl;
    } 
}
