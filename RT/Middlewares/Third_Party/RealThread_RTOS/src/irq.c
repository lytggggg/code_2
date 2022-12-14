??/ *  
   *   C o p y r i g h t   ( c )   2 0 0 6 - 2 0 2 1 ,   R T - T h r e a d   D e v e l o p m e n t   T e a m  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   C h a n g e   L o g s :  
   *   D a t e                       A u t h o r               N o t e s  
   *   2 0 0 6 - 0 2 - 2 4           B e r n a r d             f i r s t   v e r s i o n  
   *   2 0 0 6 - 0 5 - 0 3           B e r n a r d             a d d   I R Q _ D E B U G  
   *   2 0 1 6 - 0 8 - 0 9           A r d a F u               a d d   i n t e r r u p t   e n t e r   a n d   l e a v e   h o o k .  
   *   2 0 1 8 - 1 1 - 2 2           J e s v e n               r t _ i n t e r r u p t _ g e t _ n e s t   f u n c t i o n   a d d   d i s a b l e   i r q  
   * /  
  
 # i n c l u d e   < r t h w . h >  
 # i n c l u d e   < r t t h r e a d . h >  
  
 # i f d e f   R T _ U S I N G _ H O O K  
  
 s t a t i c   v o i d   ( * r t _ i n t e r r u p t _ e n t e r _ h o o k ) ( v o i d ) ;  
 s t a t i c   v o i d   ( * r t _ i n t e r r u p t _ l e a v e _ h o o k ) ( v o i d ) ;  
  
 / * *  
   *   @ i n g r o u p   H o o k  
   *   T h i s   f u n c t i o n   s e t   a   h o o k   f u n c t i o n   w h e n   t h e   s y s t e m   e n t e r   a   i n t e r r u p t  
   *  
   *   @ n o t e   t h e   h o o k   f u n c t i o n   m u s t   b e   s i m p l e   a n d   n e v e r   b e   b l o c k e d   o r   s u s p e n d .  
   * /  
 v o i d   r t _ i n t e r r u p t _ e n t e r _ s e t h o o k ( v o i d   ( * h o o k ) ( v o i d ) )  
 {  
         r t _ i n t e r r u p t _ e n t e r _ h o o k   =   h o o k ;  
 }  
 / * *  
   *   @ i n g r o u p   H o o k  
   *   T h i s   f u n c t i o n   s e t   a   h o o k   f u n c t i o n   w h e n   t h e   s y s t e m   e x i t   a   i n t e r r u p t .  
   *  
   *   @ n o t e   t h e   h o o k   f u n c t i o n   m u s t   b e   s i m p l e   a n d   n e v e r   b e   b l o c k e d   o r   s u s p e n d .  
   * /  
 v o i d   r t _ i n t e r r u p t _ l e a v e _ s e t h o o k ( v o i d   ( * h o o k ) ( v o i d ) )  
 {  
         r t _ i n t e r r u p t _ l e a v e _ h o o k   =   h o o k ;  
 }  
 # e n d i f  
  
 / *   # d e f i n e   I R Q _ D E B U G   * /  
  
 / * *  
   *   @ a d d t o g r o u p   K e r n e l  
   * /  
  
 / * * @ { * /  
  
 v o l a t i l e   r t _ u i n t 8 _ t   r t _ i n t e r r u p t _ n e s t ;  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   b e   i n v o k e d   b y   B S P ,   w h e n   e n t e r   i n t e r r u p t   s e r v i c e   r o u t i n e  
   *  
   *   @ n o t e   p l e a s e   d o n ' t   i n v o k e   t h i s   r o u t i n e   i n   a p p l i c a t i o n  
   *  
   *   @ s e e   r t _ i n t e r r u p t _ l e a v e  
   * /  
 v o i d   r t _ i n t e r r u p t _ e n t e r ( v o i d )  
 {  
         r t _ b a s e _ t   l e v e l ;  
  
         R T _ D E B U G _ L O G ( R T _ D E B U G _ I R Q ,   ( " i r q   c o m i n g . . . ,   i r q   n e s t : % d \ n " ,  
                                                                 r t _ i n t e r r u p t _ n e s t ) ) ;  
  
         l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
         r t _ i n t e r r u p t _ n e s t   + + ;  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ i n t e r r u p t _ e n t e r _ h o o k , ( ) ) ;  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   b e   i n v o k e d   b y   B S P ,   w h e n   l e a v e   i n t e r r u p t   s e r v i c e   r o u t i n e  
   *  
   *   @ n o t e   p l e a s e   d o n ' t   i n v o k e   t h i s   r o u t i n e   i n   a p p l i c a t i o n  
   *  
   *   @ s e e   r t _ i n t e r r u p t _ e n t e r  
   * /  
 v o i d   r t _ i n t e r r u p t _ l e a v e ( v o i d )  
 {  
         r t _ b a s e _ t   l e v e l ;  
  
         R T _ D E B U G _ L O G ( R T _ D E B U G _ I R Q ,   ( " i r q   l e a v e ,   i r q   n e s t : % d \ n " ,  
                                                                 r t _ i n t e r r u p t _ n e s t ) ) ;  
  
         l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
         r t _ i n t e r r u p t _ n e s t   - - ;  
         R T _ O B J E C T _ H O O K _ C A L L ( r t _ i n t e r r u p t _ l e a v e _ h o o k , ( ) ) ;  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   r e t u r n   t h e   n e s t   o f   i n t e r r u p t .  
   *  
   *   U s e r   a p p l i c a t i o n   c a n   i n v o k e   t h i s   f u n c t i o n   t o   g e t   w h e t h e r   c u r r e n t  
   *   c o n t e x t   i s   i n t e r r u p t   c o n t e x t .  
   *  
   *   @ r e t u r n   t h e   n u m b e r   o f   n e s t e d   i n t e r r u p t s .  
   * /  
 R T _ W E A K   r t _ u i n t 8 _ t   r t _ i n t e r r u p t _ g e t _ n e s t ( v o i d )  
 {  
         r t _ u i n t 8 _ t   r e t ;  
         r t _ b a s e _ t   l e v e l ;  
  
         l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
         r e t   =   r t _ i n t e r r u p t _ n e s t ;  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
         r e t u r n   r e t ;  
 }  
  
 / * * @ } * /  