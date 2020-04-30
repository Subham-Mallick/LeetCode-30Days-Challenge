vector<vector<string>> groupAnagrams(vector<string>& strs) {
      unordered_map<string, vector<string>> mp;
      for (string s : strs) {
          string temp = s; 
          sort(temp.begin(), temp.end());
          mp[temp].push_back(s);
      }
      vector<vector<string>> anagrams;
      for (auto ele : mp) { 
          anagrams.push_back(ele.second);
      }
      return anagrams;
  }
