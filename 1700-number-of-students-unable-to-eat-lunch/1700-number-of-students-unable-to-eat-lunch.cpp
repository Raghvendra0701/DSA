class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for(int i=0;i<students.size();i++){
            q.push(students[i]);
        }
        stack<int> st;
        for(int i=sandwiches.size()-1;i>=0;i--){
            st.push(sandwiches[i]);
        }
        int n=students.size();
        int count=0;
        while(st.size()>0 && count!=q.size()){
            if(st.top()==q.front()){
                q.pop();
                st.pop();
                count=0;
            }
            else{
                q.push(q.front());
                q.pop();
                count++;
            }
            
        }    
        return q.size();
        
    }
};