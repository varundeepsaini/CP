    import java.util.Scanner;
     
    public class 4A_Watermelon {
        public static void main(String[] arg){
            Scanner sc = new Scanner(System.in);
            int N = sc.nextInt();
            if (N == 2){
                System.out.println("NO");
     
            } else if (N % 2 == 0) {
                System.out.println("YES");
            }else {
                System.out.println("NO");
     
            }
        }
    }