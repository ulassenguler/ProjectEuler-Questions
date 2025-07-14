/*
Q2: Find the sum of even-valued terms in the Fibonacci sequence that do not exceed four million. 
The solution involves generating Fibonacci numbers until they exceed four million, and then summing the even ones. 

1) BAŞLA  
2) first’e 1 değerini ata  
3) second’a 2 değerini ata  
4) evensum’a 2 değerini ata  
5) sum = first + second 
6) first ve second’ı ekrana yaz  
7) Eğer sum 4 milyondan büyükse 13. adıma git  
8) sum’u ekrana yaz  
9) Eğer sum çiftse evensum’a sum ekle  
10) first = second  
11) second = sum  
12) sum = first + second, 7. adıma git  
13) evensum’u ekrana yaz  
14) BİTİŞ
*/

int main() {
    int first = 1;
    int second = 2;
    int sum = first + second;
    int evensum = 2;

    printf("%d, %d", first, second);  // İlk iki sayı

    while (sum <= 4000000) {
        printf(", %d", sum);  // Fibonacci sayısını yazdır

        if (sum % 2 == 0) {
            evensum += sum;   // Eğer çiftse, toplama ekle
        }

        first = second;
        second = sum;
        sum = first + second;
    }

    printf("\nToplam çift sayıların toplamı: %d\n", evensum);

    return 0;
}