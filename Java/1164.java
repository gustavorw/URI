import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        int n, x, i, j, aux, soma;
        
        Scanner teclado = new Scanner(System.in);
        
        n = teclado.nextInt();
        
        for(i = 0; i < n; i++){
            x = teclado.nextInt();
            
            aux = x/2;
            soma = 0;
            
            for(j = 1; j <= aux; j++){      
                if(x % j == 0){
                    soma += j;
                }
            }
            
            if(soma == x){
                System.out.println(x + " eh perfeito");
            }
            else{
                System.out.println(x + " nao eh perfeito");
            }
        }
    } 
}