class Solution {
public:
    string addBinary(string a, string b) {
        string res="";
        int carry=0;
        int i=a.size()-1;
        int j=b.size()-1;
        while(i>=0 && j>=0){
            if(a[i]=='1' && b[j]=='1'){
                if(carry==1)
                res='1'+res;
                else
                res='0'+res;
                carry=1;
            }
            else if(a[i]=='0' && b[j]=='0'){
                if(carry==1){
                    res='1'+res;
                    carry=0;
                }
                else{
                res='0'+res;
                carry=0;
                }
            } 
            else{
                if(carry==1){
                    res='0'+res;
                    carry=1;
                }
                else{
                res='1'+res;
                carry=0;
                }
            }
            i--;
            j--;
        }
        while(i>=0){
            if(a[i]=='1'){
                if(carry==1){
                    res='0'+res;
                    carry=1;
                }
                else{
                    res='1'+res;
                    carry=0;
                }
            }
            else{
                if(carry==1){
                    res='1'+res;
                    carry=0;
                }
                else{
                res='0'+res;
                carry=0;
                }
            }
            i--;
        }
        while(j>=0){
            if(b[j]=='1'){
                if(carry==1){
                    res='0'+res;
                    carry=1;
                }
                else{
                    res='1'+res;
                    carry=0;
                }
            }
            else{
                if(carry==1){
                    res='1'+res;
                    carry=0;
                }
                else{
                res='0'+res;
                carry=0;
                }
            }
            j--;
        }
        if(carry==1)
        res='1'+res;
        return res;
    }
};