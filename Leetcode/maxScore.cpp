class Solution {
public:
    
    void show(vector<int> x) {
        cout<<"V"<<" ";
        for(int y : x) {
            cout<<y<<" ";
        }
        cout<<endl;
    }
    
    int maxScore(vector<int>& cardPoints, int k) {
        int result = 0;
        if(cardPoints.size() == 0) {
            return result;
        }
        if(k == cardPoints.size()) {
            for(int x : cardPoints) {
                result = result + x;
            }
            return result;
        }
            int ls = 0;
            int i;
            for(i = 0; i < k; i++) {
                ls = ls + cardPoints[i];
            }
            i--;
            int rs = 0;
            int j, l;
            for(j = cardPoints.size() - 1, l = 0; l < k; j--, l++) {
                rs = rs + cardPoints[j];
            }
            j++;
        int cardsPicked = 0;
        while(cardsPicked < k) {
            // cout<<cardsPicked<<endl;
            // show(cardPoints);
            // cout<<"RESULT IS "<<result<<endl;
            // cout<<ls<<" "<<rs<<endl;
            
            // int cardsRemaining = k - cardsPicked;
            // if(cardPoints[0] > cardPoints[cardPoints.size() - 1]) {
            //     result = result + cardPoints[0];
            //     ls = ls - cardPoints[0];
            //     cardPoints.erase(cardPoints.begin());
            // } else if(cardPoints[0] < cardPoints[cardPoints.size() - 1]) {
            //     result = result + cardPoints[cardPoints.size() 