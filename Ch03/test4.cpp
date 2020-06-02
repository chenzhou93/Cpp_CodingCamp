#include <iostream>

using namespace std;

bool JudgeBack(const char *pStr,int len){    
    if(len<=1){       
        return true;	
    }else if(pStr[0]==  pStr[len-1]){		
        return JudgeBack(pStr++, len-2);	
    }else{		
        return false;    
    }
}

int main(){
    const char *pTmp="abccba";    
    if(JudgeBack(pTmp,strlen(pTmp))){        
        cout<<"YES!"<<endl;    
    }else{        
        cout<<"NO!"<<endl;   
    }      
    return 0; 
}