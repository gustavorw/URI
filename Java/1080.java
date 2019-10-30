import java.util.Scanner;
class Main {

  public static void main(String[] args) {

    Scanner teclado = new Scanner(System.in);

    int i, maior = 0, posi = 0, n;

    for(i = 1; i <= 100; i++){
      n = teclado.nextInt();

      if(maior < n){
        maior = n;
        posi = i;
      }
    }
    System.out.println(maior + "\n" + posi);
    
  }
}