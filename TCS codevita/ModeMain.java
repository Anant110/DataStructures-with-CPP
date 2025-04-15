import java.util.Scanner;

public class ModeMain {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        // Read the string input
        String s = sc.nextLine();
        int m = s.length();

        // Read the integer array
        int[] v = new int[m];
        for (int i = 0; i < m; i++) {
            v[i] = sc.nextInt();
        }

        // Initialize variables
        int res = 0;
        int low = s.charAt(0) - '0';  
        int lowv = v[0];

        for (int i = 1; i < m; i++) {  
            if (s.charAt(i) - '0' == low) {
                res += Math.min(lowv, v[i]);  
                lowv = Math.max(lowv, v[i]); 
            } else {
                low = s.charAt(i) - '0';  
                lowv = v[i];     
            }
        }

        // Output the result
        System.out.print(res);
    }
}
