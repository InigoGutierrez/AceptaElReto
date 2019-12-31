package problemas;

public class Problema484ElIncidenteDeDhahran {

	static java.util.Scanner in;

	public static void main(String args[]) {
		in = new java.util.Scanner(System.in);
		String caso;
		String[] partes;
		String entera;
		String decimal;
		while (in.hasNext()) {
			caso = in.nextLine();

			partes = caso.split("\\.");

			entera = partes[0];
			entera = entera.replaceFirst("^0*", "");
			if (entera.isEmpty())
				System.out.print("0");
			else
				System.out.print(entera);

			if (partes.length > 1) {
				decimal = partes[1];
				decimal = decimal.replaceAll("0*$", "");
				if (decimal.isEmpty())
					System.out.println();
				else
					System.out.println("." + decimal);
			}
			else
				System.out.println();
		}
	}
}