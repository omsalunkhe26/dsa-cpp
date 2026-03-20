class Solution {
public:

bool isFreqsame(int freq[],int windFreq[]){
    for(int i=0;i<26;i++){
        if(freq[i]!=windFreq[i]) return false;
    }
    return true;
}
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        for(int i=0;i< s1.length();i++ ){
            freq[s1[i]-'a']++;
        }
        int windowSize =s1.length();

        for(int i=0;i<s2.length();i++){
            int windIdx=0;
            int idx=i;
            int windFreq[26]={0};
            
            while(windIdx < windowSize && idx < s2.length()){
                windFreq[s2[idx]-'a']++;
               windIdx++; idx++;
            }
            if(isFreqsame(freq,windFreq)){
                return true;
            }
            
          }
          return false;
    }
};