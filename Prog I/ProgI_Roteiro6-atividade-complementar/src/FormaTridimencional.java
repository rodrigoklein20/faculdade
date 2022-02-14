
public abstract class FormaTridimencional extends Forma {
	

	public FormaTridimencional() {
		super();
	}

	public FormaTridimencional(double ar) {
		super(ar);
	}

	public abstract double obterVolume();
	
	@Override
	public String toString() {
		return String.format("Volume=%f", obterVolume());
	}


}
