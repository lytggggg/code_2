??# i n c l u d e   " r e f . h "  
  
 v o i d   r e f _ f i r _ l a t t i c e _ f 3 2 (  
     c o n s t   a r m _ f i r _ l a t t i c e _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     f l o a t 3 2 _ t   * p S t a t e ;                                                           / *   S t a t e   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p C o e f f s   =   S - > p C o e f f s ;                               / *   C o e f f i c i e n t   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p x ;                                                                   / *   t e m p o r a r y   s t a t e   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p k ;                                                                   / *   t e m p o r a r y   c o e f f i c i e n t   p o i n t e r   * /  
     f l o a t 3 2 _ t   f c u r r ,   f n e x t ,   g c u r r ,   g n e x t ;                     / *   t e m p o r a r y   v a r i a b l e s   * /  
     u i n t 3 2 _ t   n u m S t a g e s   =   S - > n u m S t a g e s ;                           / *   L e n g t h   o f   t h e   f i l t e r   * /  
     u i n t 3 2 _ t   b l k C n t ,   s t a g e C n t ;                                           / *   t e m p o r a r y   v a r i a b l e s   f o r   c o u n t s   * /  
  
     p S t a t e   =   & S - > p S t a t e [ 0 ] ;  
  
     b l k C n t   =   b l o c k S i z e ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   f 0 ( n )   =   x ( n )   * /  
         f c u r r   =   * p S r c + + ;  
  
         / *   I n i t i a l i z e   c o e f f   p o i n t e r   * /  
         p k   =   p C o e f f s ;  
  
         / *   I n i t i a l i z e   s t a t e   p o i n t e r   * /  
         p x   =   p S t a t e ;  
  
         / *   r e a d   g 0 ( n - 1 )   f r o m   s t a t e   b u f f e r   * /  
         g c u r r   =   * p x ;  
  
         / *   f o r   s a m p l e   1   p r o c e s s i n g   * /  
         / *   f 1 ( n )   =   f 0 ( n )   +     K 1   *   g 0 ( n - 1 )   * /  
         f n e x t   =   f c u r r   +   ( ( * p k )   *   g c u r r ) ;  
         / *   g 1 ( n )   =   f 0 ( n )   *   K 1     +     g 0 ( n - 1 )   * /  
         g n e x t   =   ( f c u r r   *   ( * p k + + ) )   +   g c u r r ;  
  
         / *   s a v e   f 0 ( n )   i n   s t a t e   b u f f e r   * /  
         * p x + +   =   f c u r r ;  
  
         / *   f 1 ( n )   i s   s a v e d   i n   f c u r r                          
               f o r   n e x t   s t a g e   p r o c e s s i n g   * /  
         f c u r r   =   f n e x t ;  
  
         s t a g e C n t   =   ( n u m S t a g e s   -   1 U ) ;  
  
         / *   s t a g e   l o o p   * /  
         w h i l e   ( s t a g e C n t   >   0 U )  
         {  
             / *   r e a d   g 2 ( n )   f r o m   s t a t e   b u f f e r   * /  
             g c u r r   =   * p x ;  
  
             / *   s a v e   g 1 ( n )   i n   s t a t e   b u f f e r   * /  
             * p x + +   =   g n e x t ;  
  
             / *   S a m p l e   p r o c e s s i n g   f o r   K 2 ,   K 3 . . . .   * /  
             / *   f 2 ( n )   =   f 1 ( n )   +     K 2   *   g 1 ( n - 1 )   * /  
             f n e x t   =   f c u r r   +   ( ( * p k )   *   g c u r r ) ;  
             / *   g 2 ( n )   =   f 1 ( n )   *   K 2     +     g 1 ( n - 1 )   * /  
             g n e x t   =   ( f c u r r   *   ( * p k + + ) )   +   g c u r r ;  
  
             / *   f 1 ( n )   i s   s a v e d   i n   f c u r r 1                          
                   f o r   n e x t   s t a g e   p r o c e s s i n g   * /  
             f c u r r   =   f n e x t ;  
  
             s t a g e C n t - - ;  
         }  
  
         / *   y ( n )   =   f N ( n )   * /  
         * p D s t + +   =   f c u r r ;  
  
         b l k C n t - - ;  
     }  
 }  
  
 v o i d   r e f _ f i r _ l a t t i c e _ q 3 1 (  
     c o n s t   a r m _ f i r _ l a t t i c e _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     q 3 1 _ t   * p S t a t e ;                                                                   / *   S t a t e   p o i n t e r   * /  
     q 3 1 _ t   * p C o e f f s   =   S - > p C o e f f s ;                                       / *   C o e f f i c i e n t   p o i n t e r   * /  
     q 3 1 _ t   * p x ;                                                                           / *   t e m p o r a r y   s t a t e   p o i n t e r   * /  
     q 3 1 _ t   * p k ;                                                                           / *   t e m p o r a r y   c o e f f i c i e n t   p o i n t e r   * /  
     q 3 1 _ t   f c u r r ,   f n e x t ,   g c u r r ,   g n e x t ;                             / *   t e m p o r a r y   v a r i a b l e s   * /  
     u i n t 3 2 _ t   n u m S t a g e s   =   S - > n u m S t a g e s ;                           / *   L e n g t h   o f   t h e   f i l t e r   * /  
     u i n t 3 2 _ t   b l k C n t ,   s t a g e C n t ;                                           / *   t e m p o r a r y   v a r i a b l e s   f o r   c o u n t s   * /  
  
     p S t a t e   =   & S - > p S t a t e [ 0 ] ;  
  
     b l k C n t   =   b l o c k S i z e ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   f 0 ( n )   =   x ( n )   * /  
         f c u r r   =   * p S r c + + ;  
  
         / *   I n i t i a l i z e   c o e f f   p o i n t e r   * /  
         p k   =   p C o e f f s ;  
  
         / *   I n i t i a l i z e   s t a t e   p o i n t e r   * /  
         p x   =   p S t a t e ;  
  
         / *   r e a d   g 0 ( n - 1 )   f r o m   s t a t e   b u f f e r   * /  
         g c u r r   =   * p x ;  
  
         / *   f o r   s a m p l e   1   p r o c e s s i n g   * /  
         / *   f 1 ( n )   =   f 0 ( n )   +     K 1   *   g 0 ( n - 1 )   * /  
         f n e x t   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   g c u r r   *   ( * p k ) )   > >   3 1 )   +   f c u r r ;  
         / *   g 1 ( n )   =   f 0 ( n )   *   K 1     +     g 0 ( n - 1 )   * /  
         g n e x t   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   f c u r r   *   ( * p k + + ) )   > >   3 1 )   +   g c u r r ;  
         / *   s a v e   g 1 ( n )   i n   s t a t e   b u f f e r   * /  
         * p x + +   =   f c u r r ;  
  
         / *   f 1 ( n )   i s   s a v e d   i n   f c u r r 1                          
               f o r   n e x t   s t a g e   p r o c e s s i n g   * /  
         f c u r r   =   f n e x t ;  
  
         s t a g e C n t   =   ( n u m S t a g e s   -   1 U ) ;  
  
         / *   s t a g e   l o o p   * /  
         w h i l e   ( s t a g e C n t   >   0 U )  
         {  
             / *   r e a d   g 2 ( n )   f r o m   s t a t e   b u f f e r   * /  
             g c u r r   =   * p x ;  
  
             / *   s a v e   g 1 ( n )   i n   s t a t e   b u f f e r   * /  
             * p x + +   =   g n e x t ;  
  
             / *   S a m p l e   p r o c e s s i n g   f o r   K 2 ,   K 3 . . . .   * /  
             / *   f 2 ( n )   =   f 1 ( n )   +     K 2   *   g 1 ( n - 1 )   * /  
             f n e x t   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   g c u r r   *   ( * p k ) )   > >   3 1 )   +   f c u r r ;  
             / *   g 2 ( n )   =   f 1 ( n )   *   K 2     +     g 1 ( n - 1 )   * /  
             g n e x t   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   f c u r r   *   ( * p k + + ) )   > >   3 1 )   +   g c u r r ;  
  
             / *   f 1 ( n )   i s   s a v e d   i n   f c u r r 1                          
                   f o r   n e x t   s t a g e   p r o c e s s i n g   * /  
             f c u r r   =   f n e x t ;  
  
             s t a g e C n t - - ;  
  
         }  
  
         / *   y ( n )   =   f N ( n )   * /  
         * p D s t + +   =   f c u r r ;  
  
         b l k C n t - - ;  
  
     }  
 }  
  
 v o i d   r e f _ f i r _ l a t t i c e _ q 1 5 (  
     c o n s t   a r m _ f i r _ l a t t i c e _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     q 1 5 _ t   * p S t a t e ;                                                                   / *   S t a t e   p o i n t e r   * /  
     q 1 5 _ t   * p C o e f f s   =   S - > p C o e f f s ;                                       / *   C o e f f i c i e n t   p o i n t e r   * /  
     q 1 5 _ t   * p x ;                                                                           / *   t e m p o r a r y   s t a t e   p o i n t e r   * /  
     q 1 5 _ t   * p k ;                                                                           / *   t e m p o r a r y   c o e f f i c i e n t   p o i n t e r   * /  
     q 3 1 _ t   f c u r n t ,   f n e x t ,   g c u r n t ,   g n e x t ;                         / *   t e m p o r a r y   v a r i a b l e s   * /  
     u i n t 3 2 _ t   n u m S t a g e s   =   S - > n u m S t a g e s ;                           / *   L e n g t h   o f   t h e   f i l t e r   * /  
     u i n t 3 2 _ t   b l k C n t ,   s t a g e C n t ;                                           / *   t e m p o r a r y   v a r i a b l e s   f o r   c o u n t s   * /  
  
     p S t a t e   =   & S - > p S t a t e [ 0 ] ;  
  
     b l k C n t   =   b l o c k S i z e ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   f 0 ( n )   =   x ( n )   * /  
         f c u r n t   =   * p S r c + + ;  
  
         / *   I n i t i a l i z e   c o e f f   p o i n t e r   * /  
         p k   =   ( p C o e f f s ) ;  
  
         / *   I n i t i a l i z e   s t a t e   p o i n t e r   * /  
         p x   =   p S t a t e ;  
  
         / *   r e a d   g 0 ( n - 1 )   f r o m   s t a t e   b u f f e r   * /  
         g c u r n t   =   * p x ;  
  
         / *   f o r   s a m p l e   1   p r o c e s s i n g   * /  
         / *   f 1 ( n )   =   f 0 ( n )   +     K 1   *   g 0 ( n - 1 )   * /  
         f n e x t   =   ( ( g c u r n t   *   ( * p k ) )   > >   1 5 U )   +   f c u r n t ;  
         f n e x t   =   r e f _ s a t _ q 1 5 ( f n e x t ) ;  
  
  
         / *   g 1 ( n )   =   f 0 ( n )   *   K 1     +     g 0 ( n - 1 )   * /  
         g n e x t   =   ( ( f c u r n t   *   ( * p k + + ) )   > >   1 5 U )   +   g c u r n t ;  
         g n e x t   =   r e f _ s a t _ q 1 5 ( g n e x t ) ;  
  
         / *   s a v e   f 0 ( n )   i n   s t a t e   b u f f e r   * /  
         * p x + +   =   ( q 1 5 _ t )   f c u r n t ;  
  
         / *   f 1 ( n )   i s   s a v e d   i n   f c u r n t                          
               f o r   n e x t   s t a g e   p r o c e s s i n g   * /  
         f c u r n t   =   f n e x t ;  
  
         s t a g e C n t   =   ( n u m S t a g e s   -   1 U ) ;  
  
         / *   s t a g e   l o o p   * /  
         w h i l e   ( s t a g e C n t   >   0 U )  
         {  
             / *   r e a d   g 1 ( n - 1 )   f r o m   s t a t e   b u f f e r   * /  
             g c u r n t   =   * p x ;  
  
             / *   s a v e   g 0 ( n - 1 )   i n   s t a t e   b u f f e r   * /  
             * p x + +   =   ( q 1 5 _ t )   g n e x t ;  
  
             / *   S a m p l e   p r o c e s s i n g   f o r   K 2 ,   K 3 . . . .   * /  
             / *   f 2 ( n )   =   f 1 ( n )   +     K 2   *   g 1 ( n - 1 )   * /  
             f n e x t   =   ( ( g c u r n t   *   ( * p k ) )   > >   1 5 U )   +   f c u r n t ;  
             f n e x t   =   r e f _ s a t _ q 1 5 ( f n e x t ) ;  
  
             / *   g 2 ( n )   =   f 1 ( n )   *   K 2     +     g 1 ( n - 1 )   * /  
             g n e x t   =   ( ( f c u r n t   *   ( * p k + + ) )   > >   1 5 U )   +   g c u r n t ;  
             g n e x t   =   r e f _ s a t _ q 1 5 ( g n e x t ) ;  
  
  
             / *   f 1 ( n )   i s   s a v e d   i n   f c u r n t                          
                   f o r   n e x t   s t a g e   p r o c e s s i n g   * /  
             f c u r n t   =   f n e x t ;  
  
             s t a g e C n t - - ;  
  
         }  
  
         / *   y ( n )   =   f N ( n )   * /  
         * p D s t + +   =   r e f _ s a t _ q 1 5 ( f c u r n t ) ;  
  
  
         b l k C n t - - ;  
  
     }  
 }  