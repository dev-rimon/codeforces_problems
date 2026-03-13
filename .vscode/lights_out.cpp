 #include <iostream>
using namespace std;

int main() {
    int press[3][3];
    
    // Input
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> press[i][j];
        }
    }

    // Directions: self, up, down, left, right
    int dx[5] = {0, -1, 1, 0, 0};
    int dy[5] = {0, 0, 0, -1, 1};

    // For each cell
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            int total = 0;

            // Check self + neighbors
            for (int d = 0; d < 5; d++) {
                int ni = i + dx[d];
                int nj = j + dy[d];

                if (ni >= 0 && ni < 3 && nj >= 0 && nj < 3) {
                    total += press[ni][nj];
                }
            }

            // Initially all lights are ON (1)
            if (total % 2 == 0)
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
    }

    return 0;
}
