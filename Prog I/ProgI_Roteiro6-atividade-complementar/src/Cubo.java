
public class Cubo extends FormaTridimencional {

	public Cubo() {
		super();
	}

	public Cubo(double ar) {
		super(ar);
	}

	@Override
	public double obterVolume() {
		return Math.pow(getAr(), 3);
	}

	@Override
	public double obterArea() {
		return 6 * Math.pow(getAr(), 2);
	}

}
