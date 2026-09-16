class Solution {
public:
    int mostWordsFound(vector<string>& sentences) { 
        int count,max=0;
        int n=sentences.size();
        for(auto& it:sentences){
              count =1;
            for(auto& i : it){              
                if(i==' ')
                count++;
            }
            if(count>max)
            max=count;
        }
        return max;
    }
};