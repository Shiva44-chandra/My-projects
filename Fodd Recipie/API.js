      var id;
      var api='https://api.spoonacular.com/recipes/';
      //var product='pasta';
      var ak='/information?&apiKey=acaa88840d734f639a369214084b52ad&includeNutrition=true';

    
 var ti;

function Randimage()
{     
      var xhr= new XMLHttpRequest();
      
      xhr.onload= function()
                       {  
                           console.log(xhr.response); 
                           var Jres=JSON.parse(xhr.response); 
                           
                         var imgurl=Jres.image;
                           var tit=Jres.sourceUrl; 
                           var ti=Jres.readyinMinutes;
                           console.log(ti);
                          $('#dog-img').attr('src',imgurl);
                           //document.getElementById("time").innerHTML = ti;
                           document.getElementById("link").innerHTML = "Source!";
                           document.getElementById("link").href = tit;
                           //$('#link').text('source');
                           //$('#link').attr('href',tit);
                       }; 
         //produt=$('#typ').val();
       // console.log(produt);
       var url=api+id+ak;
      xhr.open('get',url,true);
      xhr.send(); 
      
}  

function setup()
{ 
     var set= new XMLHttpRequest();
      
    

     set.onload = function()
                        {
                      console.log(set.response);        
                     var Jr=JSON.parse(set.response); 
                      id=Jr.results[0].id;
                      console.log(id);
                      ti=Jr.results[0].readyInMinutes;
                      console.log(ti);
                      Randimage();
         //document.getElementById("time").innerHTML = "Ready In "+ti+"Minutes";
                                  
                              

                         }


     var tapi='https://api.spoonacular.com/recipes/complexSearch?apiKey=acaa88840d734f639a369214084b52ad&number=1&query=';
     var prod=$('#typ').val();
     var turl=tapi+prod;
     set.open('get',turl,true);
     set.send(); 
}

$('.but').click(setup);