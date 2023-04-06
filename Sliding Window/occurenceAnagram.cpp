// *************GFG**************
// Count Occurences of Anagrams

// Given a word pat and a text txt. Return the count of the occurences of anagrams of the word in the text.

// Example 1:

// Input:
// txt = forxxorfxdofr
// pat = for
// Output: 3
// Explanation: for, orf and ofr appears
// in the txt, hence answer is 3.

class Solution{
public:
	int search(string s2, string s1) {
	    int start = 0;
	    int last = 0;
	    int k = s2.size();
	    int n = s1.size();
	    int ans = 0;
	    unordered_map<char,int> mp;
	    for(char &a : s2)mp[a]++;
	    int count = mp.size();
	    
	    while(last < n){
	        if(mp.find(s1[last]) != mp.end()){
	            mp[s1[last]]--;
	            if(mp[s1[last]] == 0){
	                count--;
	            }
	        }
	        if((last-start+1) < k){
	            last++;
	        }
	        else if((last-start+1) == k){
	            if(count == 0){
	                ans++;
	            }
	            if(mp.find(s1[start]) != mp.end()){
	                mp[s1[start]]++;
	                if(mp[s1[start]] == 1){
	                    count++;
	                }
	            }
	            start++;
	            last++;
	        }
	    }
	    return ans;
	}

};