class Solution {
public:
    int getDecimalValue(ListNode* head) {
        string num = "";
        int total = 0;
        while (head != NULL){
            num += to_string(head -> val);
            head = head -> next;
        }
        for (int i = 0; i < num.size(); i++){
            total += stoi(string(1, num[i])) * pow(2, num.size() - 1 - i);
        }
        return total;
    }
};