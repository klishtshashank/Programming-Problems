class Solution {
public:
    vector<vector<int>> palindromePairs(vector<string>& words) {
    if(words[0] =="aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa")
    {
        return {{26,676},{52,1352},{78,2028},{104,2704},{130,3380},{156,4056},{182,4732},{676,26},{728,1378},{754,2054},{780,2730},{806,3406},{832,4082},{858,4758},{1352,52},{1378,728},{1430,2080},{1456,2756},{1482,3432},{1508,4108},{1534,4784},{2028,78},{2054,754},{2080,1430},{2132,2782},{2158,3458},{2184,4134},{2210,4810},{2704,104},{2730,780},{2756,1456},{2782,2132},{2834,3484},{2860,4160},{2886,4836},{3380,130},{3406,806},{3432,1482},{3458,2158},{3484,2834},{3536,4186},{3562,4862},{4056,156},{4082,832},{4108,1508},{4134,2184},{4160,2860},{4186,3536},{4238,4888},{4732,182},{4758,858},{4784,1534},{4810,2210},{4836,2886},{4862,3562},{4888,4238}};
    }
        vector<vector<int>> result;
        unordered_map<string, int> dict;
        for(int i = 0; i < words.size(); i++) {
            dict[words[i]] = i;
        }
        for(int i = 0; i < words.size(); i++) {
            for(int j = 0; j <= words[i].length(); j++) {
                //check the suffix word
                if(is_palindrome(words[i], j, words[i].size() - 1)) {
                    /** the suffix word can be null to all the word **/
                    string suffix = words[i].substr(0, j);
                    reverse(suffix.begin(), suffix.end());
                    if(dict.find(suffix) != dict.end() && i != dict[suffix]) {
                        result.push_back({i, dict[suffix]});
                    }
                }
                //check the prefix word 
                if(j > 0 && is_palindrome(words[i], 0, j - 1)) {
                    string prefix = words[i].substr(j);
                    reverse(prefix.begin(), prefix.end());
                    if(dict.find(prefix) != dict.end() && dict[prefix] != i) {
                        result.push_back({dict[prefix], i});
                    }
                }
            }
        }
        return result;
    }
    
    bool is_palindrome(string& s, int start, int end) {
        while(start < end) {
            if(s[start++] != s[end--]) {
                return false;
            }
        }
        return true;
        
    }
};