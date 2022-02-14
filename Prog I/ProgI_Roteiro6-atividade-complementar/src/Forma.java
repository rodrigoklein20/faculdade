
public abstract class Forma {

	private double ar; // representa a aresta ou raio

	public Forma() {
		setAr(0);
	}
	
	public Forma(double ar) {
		setAr(ar);
	}
	
	public double getAr() {
		return ar;
	}

	public void setAr(double ar) {
		if ( ar < 0)
			this.ar = 0;
		else
			this.ar = ar;
	}
	
	public abstract double obterArea();
}
