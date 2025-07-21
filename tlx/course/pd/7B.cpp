#include <iostream>
using namespace std;

int biaya(int a) {
    if (a < 10)
    {
        return 100000;
    } 
    else if (a > 50)
    {
        return 50000;
    }
    else
    {
        return 75000;
    }
    
}

int main() {
    int jantan[4] = {0, 10, 50, 60};
    int betina[4] = {7, 80, 9, 40};

    for (int i = 0; i < 4; i++) {
        int biaya_jantan = biaya(jantan[i]) * jantan[i];
        int biaya_betina = biaya(betina[i]) * betina[i];

        cout << biaya_jantan + biaya_betina << endl;
    }
}

