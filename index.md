---
layout: default
title: Cursos Wachenchauzer
---

<div class="call-outs-container">


{% for materia in site.posts reversed %}

<pre> </pre>

<div class="call-out" style="background-color:{{materia.color}}">
  <h4>{{materia.codigo}}</h4>
  {% if materia.imagen %} <img src="{{materia.imagen}}"> {% endif %}
  <a href="{{materia.sitio}}" title="{{materia.titulo}}"><h4>{{materia.titulo}}</h4></a>
  <p>{{materia.descripcion}}</p>
  {% if materia.lenguajes %} <p>Lenguajes utilizados: {{materia.lenguajes}}</p> {% endif %}
</div>

<pre> </pre>

{% endfor %}

</div>