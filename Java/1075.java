import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        int n, i;
        
        Scanner teclado = new Scanner(System.in);
        
        n = teclado.nextInt();
        
        for(i = 1; i < 10000; i++){
            if(i % n == 2){
                System.out.println(i);
            }
        }
    } 
}
