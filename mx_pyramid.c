void mx_printchar(char c);

void mx_pyramid(int n) {
    if (n <= 1 || n % 2 != 0)
        return;
    
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                for (int j = 0; j < n - 1; j++){
                    mx_printchar(' ');
                }
                mx_printchar('/');
                mx_printchar('\\');
                }
            else if (i !=n -1 && i + 1 <= n / 2) {
                for (int j = 0; j < n - i - 1; j++)
                mx_printchar(' ');
                mx_printchar('/');

                for (int j = 0; j < i * 2 -1; j++){
                    mx_printchar(' ');
                }
                mx_printchar('\\');

                for (int j = 0; j < i; j++){
                    mx_printchar(' ');
                }
                mx_printchar('\\');
            }
            else if (i >= n / 2 && i < n - 1) {
                for (int j = 0; j < (n * 2) - 1; j++) {
                    if (j < n + i - 2) {
                        mx_printchar(' ');
                    }
                    if (j == n - i - 2) {
                        if (i == 0) {
                            mx_printchar(' ');
                        }
                    mx_printchar('/');
                    }
                    if (j == n + i) {
                        mx_printchar('\\');
                    }
                    if (i > 0 && j == n + i) {
                        for (int k = 0; k < n - i - 1; k++) {
                            mx_printchar(' ');
                    }
                    mx_printchar('|');
                    }
                }
            }
            else if (i == n - 1) {
                for (int j = 0; j < (n * 2); j++) {
                    if (j == 0) {
                        mx_printchar('/');
                    }
                    if (j > 0 && j < (n * 2) - 2) {
                        mx_printchar('_');
                    }
                    if (j == (n * 2) - 1) {
                        mx_printchar('\\');
                        mx_printchar('|');
                    }
                }
            }
            mx_printchar('\n');
        }
}
int main(){
    mx_pyramid(12);
}