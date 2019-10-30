import java.util.Scanner;

public class Main{

    
    public static void main(String[] args) {
        int senha = 2002, entrada;
        
        Scanner teclado = new Scanner(System.in);
        
        do{
            entrada = teclado.nextInt();
            if(entrada == senha){
                System.out.println("Acesso Permitido");
                break;
            }
            System.out.println("Senha Invalida");
        }while(entrada != senha);
    }
    
}