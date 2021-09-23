import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt(), K = sc.nextInt();
        int result = 0;

        while(true){
            if(N % K == 0){
                N = N/K;
                result ++;
            } else {
                N = N - 1;
                result ++;
            }
            if(N == 1) break;
        }
        System.out.println(result);
    }
}