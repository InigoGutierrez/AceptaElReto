
public class Problema397 {

	public static void main(String[] args) {
		Integer input;
		int counter = 0;
		String iString;
		
		for ( String arg: args ) {
			input = Integer.valueOf(arg);
			counter = 0;
			for ( Integer i = 1 ; i <= input; i++ ) {
				iString = i.toString();
				for ( int j = 0; j < iString.length(); j++ ) {
					counter += Integer.valueOf(String.valueOf(iString.charAt(j)));
				}
			}
			System.out.println(counter);
		}
	}

}
