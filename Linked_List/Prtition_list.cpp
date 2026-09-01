//Leetcode 86 (Partition list)

#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {

        ListNode* A = new ListNode(0);
        ListNode* B = new ListNode(0);

        ListNode* AH = A;
        ListNode* BH = B;

        while (head != nullptr) {

            if (head->val < x) {
                BH->next = head;
                BH = BH->next;
            }
            else {
                AH->next = head;
                AH = AH->next;
            }

            head = head->next;
        }

        AH->next = nullptr;
        BH->next = A->next;

        return B->next;
    }
};

//Time = O(n)
//Space = O(1)