if (g1>g2)
{
	final=(g1+(subst*2))/3;
}
else 
{
	final=(subst+(g2*2))/3;
}
if (final>6)
{
	printf("Voce foi aprovado com media %.2f apos a prova de substituišao.",final)
}
else
{
	printf("Voce nao atingiu a media necessaria para aprovašao. (media %f)",final)
}


