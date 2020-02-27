	
import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		int a, b, c, d;
		
		Scanner teclado = new Scanner(System.in);
		
		a = teclado.nextInt();
		b = teclado.nextInt();
		c = teclado.nextInt();
		d = teclado.nextInt();
		
		if(b > c && d > a && (c+d) > (a+b) && c > 0 && d > 0 && a % 2 ==0){
		    System.out.println("Valores aceitos");
		}
		else{
		    System.out.println("Valores nao aceitos");
		}
	}
}
