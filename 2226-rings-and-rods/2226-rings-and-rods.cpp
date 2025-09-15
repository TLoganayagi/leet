class Solution {
public:
    int countPoints(string rings) {
        int count = 0;
        for (int rod = 0; rod < 10; rod++) {
            bool R = false, G = false, B = false;
            for (int i = 0; i < rings.size(); i += 2) {
                char color = rings[i];
                int r = rings[i + 1] - '0';

                if (r == rod) {
                    if (color == 'R') R = true;
                    if (color == 'G') G = true;
                    if (color == 'B') B = true;
                }
            }
            if (R && G && B) {
                count++;
            }
        }
        return count;
    }
};
