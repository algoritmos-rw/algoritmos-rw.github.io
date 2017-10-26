---
layout: home
---

<div class="call-outs-container">


{% for materia in site.data.materias %}

<pre> </pre>

<div class="call-out">
  <h4>{{materia.codigo}}</h4>
  {% if materia.imagen %} <img src="{{materia.imagen}}"> {% endif %}
  <a href="{{materia.sitio}}" title="{{materia.titulo}}"><h4>{{materia.titulo}}</h4></a>
  <p>{{materia.objetivo}}</p>
</div>

<pre> </pre>

{% endfor %}

</div>