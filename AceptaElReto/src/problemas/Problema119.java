package problemas;

public class Problema119 {
	
	static java.util.Scanner in;

	public static void main(String[] args) {
		in = new java.util.Scanner(System.in);
		
		int tama�o = in.nextInt();
		while ( tama�o != 0 ) {
			System.out.println(casoDePrueba(tama�o));
			tama�o = in.nextInt();
		}
	}
	
	public static int casoDePrueba(int tama�o) {
		double root = Math.sqrt((double)tama�o);
		int lado = (int) Math.floor(root);
		int escudos = lado * lado + lado * 4;
		if ( lado * lado < tama�o ) {
			escudos += casoDePrueba(tama�o - lado * lado);
		}
		return escudos;
	}

}
