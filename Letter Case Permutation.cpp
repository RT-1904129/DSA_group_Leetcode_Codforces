// we can toggle case by s[i]^= (1<<5) and we can reduce redundent work Time Complexity is (2^m )* n
    vector<string>result;
    void backtra(string s,int start,int end,string str){
        if(start == end){
            result.push_back(str);
            return;
        }
        if(isalpha(s[start])){
            str.push_back(tolower(s[start]));
            backtra(s,start+1,end,str);
            str.pop_back();
            str.push_back(toupper(s[start]));
            backtra(s,start+1,end,str);
            str.pop_back();
            
        }
        else {
            str.push_back(s[start]);
            backtra(s,start+1,end,str);
            str.pop_back();
        }
    }
    
    vector<string> letterCasePermutation(string s) {
        if(s.length() == 0) return result;
        string str;
        backtra(s,0,s.length(),str);
        return result;
    }