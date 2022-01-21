//
// Created by Ibrahim ERTURK on 21.01.2022.
//

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
