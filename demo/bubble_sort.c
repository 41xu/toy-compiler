void main() {
    int i, j;

    int a[5] = {651, 54, 409, 13, 4};

    for (i = 0; i < 5; i = i + 1) {
        for (j = i; j < 5; j = j + 1) {
            if (a[i] > a[j]) {
                int t;

                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    for (i = 0; i < 5; i = i + 1) {
        print(a[i]);
    }
}
