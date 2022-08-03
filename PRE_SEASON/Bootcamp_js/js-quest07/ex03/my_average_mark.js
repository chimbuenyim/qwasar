function my_average_mark(params) {

    let avg = params.reduce((a,b)=>a +b.integer,0) / params.length
   
    return avg.toFixed(1)
}