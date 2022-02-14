
public class Quadrado extends FormaBidimencional {

	public Quadrado() {
		super();
	}

	public Quadrado(double ar) {
		super(ar);
	}

	@Override
	public double obterArea() {
		return getAr() * getAr();
	}

}
