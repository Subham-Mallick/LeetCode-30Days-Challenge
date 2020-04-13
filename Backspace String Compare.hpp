bool backspaceCompare(string S, string T) {
      stack<char> s1;
      stack<char> s2;

      for(auto i:S)
          if(i=='#')
          {
              if(s1.empty())
                  continue;
              s1.pop();
          }
          else
              s1.push(i);

      for(auto i:T)
          if(i=='#')
          {
              if(s2.empty())
                  continue;
              s2.pop();
          }
          else
              s2.push(i);

      if(s1.size()!=s2.size())
          return false;

      while(s1.size())
      {
          if(s1.top()!=s2.top())
              return false;
          s1.pop();
          s2.pop();
      }
      return true;
  }
