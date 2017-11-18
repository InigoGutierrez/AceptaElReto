package problemas;

public class Problema368 {

	static java.util.Scanner in;

	public static void main(String args[]) {
		in = new java.util.Scanner(System.in);
		
		int huevos = in.nextInt();
		int olla = in.nextInt();
		while ( huevos != 0 ) {
			System.out.println(casoDePrueba(huevos, olla));
			huevos = in.nextInt();
			olla = in.nextInt();
		}
	}
	
	public static int casoDePrueba(int huevos, int olla) {
		if ( huevos % olla  != 0 ) {
			return ( huevos / olla + 1 ) * 10;
		}
		return ( huevos / olla ) * 10;
	}
}
