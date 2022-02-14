
public abstract class FormaBidimencional extends Forma {

	public FormaBidimencional() {
		super();
	}
	
	public FormaBidimencional(double ar) {
		super(ar);
	}		
	
	@Override
	public String toString() {
		return String.format("Area=%f", obterArea());
	}

}
