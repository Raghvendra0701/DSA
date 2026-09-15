class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        
        queue<pair<int,int>> q;

        for(int i = 0; i < tickets.size(); i++){
            q.push({i, tickets[i]});
        }

        int count = 0;

        while(!q.empty()) {
            
            int person = q.front().first;
            int ticket = q.front().second;
            q.pop();

            if(ticket > 0) {
                ticket--;
                count++;
            }
            if(person == k && ticket == 0) {
                return count;
            }

            if(ticket > 0) {
                q.push({person, ticket});
            }
        }

        return count;
    }
};