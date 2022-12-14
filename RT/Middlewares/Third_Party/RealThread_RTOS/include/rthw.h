??/ *  
   *   C o p y r i g h t   ( c )   2 0 0 6 - 2 0 2 1 ,   R T - T h r e a d   D e v e l o p m e n t   T e a m  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   C h a n g e   L o g s :  
   *   D a t e                       A u t h o r               N o t e s  
   *   2 0 0 6 - 0 3 - 1 8           B e r n a r d             t h e   f i r s t   v e r s i o n  
   *   2 0 0 6 - 0 4 - 2 5           B e r n a r d             a d d   r t _ h w _ c o n t e x t _ s w i t c h _ i n t e r r u p t   d e c l a r a t i o n  
   *   2 0 0 6 - 0 9 - 2 4           B e r n a r d             a d d   r t _ h w _ c o n t e x t _ s w i t c h _ t o   d e c l a r a t i o n  
   *   2 0 1 2 - 1 2 - 2 9           B e r n a r d             a d d   r t _ h w _ e x c e p t i o n _ i n s t a l l   d e c l a r a t i o n  
   *   2 0 1 7 - 1 0 - 1 7           H i c h a r d             a d d   s o m e   m i c r o s  
   * /  
  
 # i f n d e f   _ _ R T _ H W _ H _ _  
 # d e f i n e   _ _ R T _ H W _ H _ _  
  
 # i n c l u d e   < r t t h r e a d . h >  
  
 # i f d e f   _ _ c p l u s p l u s  
 e x t e r n   " C "   {  
 # e n d i f  
  
 / *  
   *   S o m e   m a c r o s   d e f i n e  
   * /  
 # i f n d e f   H W R E G 3 2  
 # d e f i n e   H W R E G 3 2 ( x )                     ( * ( ( v o l a t i l e   r t _ u i n t 3 2 _ t   * ) ( x ) ) )  
 # e n d i f  
 # i f n d e f   H W R E G 1 6  
 # d e f i n e   H W R E G 1 6 ( x )                     ( * ( ( v o l a t i l e   r t _ u i n t 1 6 _ t   * ) ( x ) ) )  
 # e n d i f  
 # i f n d e f   H W R E G 8  
 # d e f i n e   H W R E G 8 ( x )                       ( * ( ( v o l a t i l e   r t _ u i n t 8 _ t   * ) ( x ) ) )  
 # e n d i f  
  
 # i f n d e f   R T _ C P U _ C A C H E _ L I N E _ S Z  
 # d e f i n e   R T _ C P U _ C A C H E _ L I N E _ S Z         3 2  
 # e n d i f  
  
 e n u m   R T _ H W _ C A C H E _ O P S  
 {  
         R T _ H W _ C A C H E _ F L U S H             =   0 x 0 1 ,  
         R T _ H W _ C A C H E _ I N V A L I D A T E   =   0 x 0 2 ,  
 } ;  
  
 / *  
   *   C P U   i n t e r f a c e s  
   * /  
 v o i d   r t _ h w _ c p u _ i c a c h e _ e n a b l e ( v o i d ) ;  
 v o i d   r t _ h w _ c p u _ i c a c h e _ d i s a b l e ( v o i d ) ;  
 r t _ b a s e _ t   r t _ h w _ c p u _ i c a c h e _ s t a t u s ( v o i d ) ;  
 v o i d   r t _ h w _ c p u _ i c a c h e _ o p s ( i n t   o p s ,   v o i d *   a d d r ,   i n t   s i z e ) ;  
  
 v o i d   r t _ h w _ c p u _ d c a c h e _ e n a b l e ( v o i d ) ;  
 v o i d   r t _ h w _ c p u _ d c a c h e _ d i s a b l e ( v o i d ) ;  
 r t _ b a s e _ t   r t _ h w _ c p u _ d c a c h e _ s t a t u s ( v o i d ) ;  
 v o i d   r t _ h w _ c p u _ d c a c h e _ o p s ( i n t   o p s ,   v o i d *   a d d r ,   i n t   s i z e ) ;  
  
 v o i d   r t _ h w _ c p u _ r e s e t ( v o i d ) ;  
 v o i d   r t _ h w _ c p u _ s h u t d o w n ( v o i d ) ;  
  
 r t _ u i n t 8 _ t   * r t _ h w _ s t a c k _ i n i t ( v o i d               * e n t r y ,  
                                                           v o i d               * p a r a m e t e r ,  
                                                           r t _ u i n t 8 _ t   * s t a c k _ a d d r ,  
                                                           v o i d               * e x i t ) ;  
  
 / *  
   *   I n t e r r u p t   h a n d l e r   d e f i n i t i o n  
   * /  
 t y p e d e f   v o i d   ( * r t _ i s r _ h a n d l e r _ t ) ( i n t   v e c t o r ,   v o i d   * p a r a m ) ;  
  
 s t r u c t   r t _ i r q _ d e s c  
 {  
         r t _ i s r _ h a n d l e r _ t   h a n d l e r ;  
         v o i d                         * p a r a m ;  
  
 # i f d e f   R T _ U S I N G _ I N T E R R U P T _ I N F O  
         c h a r                           n a m e [ R T _ N A M E _ M A X ] ;  
         r t _ u i n t 3 2 _ t             c o u n t e r ;  
 # e n d i f  
 } ;  
  
 / *  
   *   I n t e r r u p t   i n t e r f a c e s  
   * /  
 v o i d   r t _ h w _ i n t e r r u p t _ i n i t ( v o i d ) ;  
 v o i d   r t _ h w _ i n t e r r u p t _ m a s k ( i n t   v e c t o r ) ;  
 v o i d   r t _ h w _ i n t e r r u p t _ u m a s k ( i n t   v e c t o r ) ;  
 r t _ i s r _ h a n d l e r _ t   r t _ h w _ i n t e r r u p t _ i n s t a l l ( i n t                             v e c t o r ,  
                                                                                   r t _ i s r _ h a n d l e r _ t   h a n d l e r ,  
                                                                                   v o i d                         * p a r a m ,  
                                                                                   c o n s t   c h a r             * n a m e ) ;  
  
 r t _ b a s e _ t   r t _ h w _ i n t e r r u p t _ d i s a b l e ( v o i d ) ;  
 v o i d   r t _ h w _ i n t e r r u p t _ e n a b l e ( r t _ b a s e _ t   l e v e l ) ;  
  
 / *  
   *   C o n t e x t   i n t e r f a c e s  
   * /  
 v o i d   r t _ h w _ c o n t e x t _ s w i t c h ( r t _ u b a s e _ t   f r o m ,   r t _ u b a s e _ t   t o ) ;  
 v o i d   r t _ h w _ c o n t e x t _ s w i t c h _ t o ( r t _ u b a s e _ t   t o ) ;  
 v o i d   r t _ h w _ c o n t e x t _ s w i t c h _ i n t e r r u p t ( r t _ u b a s e _ t   f r o m ,   r t _ u b a s e _ t   t o ) ;  
  
 v o i d   r t _ h w _ c o n s o l e _ o u t p u t ( c o n s t   c h a r   * s t r ) ;  
  
 v o i d   r t _ h w _ b a c k t r a c e ( r t _ u i n t 3 2 _ t   * f p ,   r t _ u b a s e _ t   t h r e a d _ e n t r y ) ;  
 v o i d   r t _ h w _ s h o w _ m e m o r y ( r t _ u i n t 3 2 _ t   a d d r ,   r t _ s i z e _ t   s i z e ) ;  
  
 / *  
   *   E x c e p t i o n   i n t e r f a c e s  
   * /  
 v o i d   r t _ h w _ e x c e p t i o n _ i n s t a l l ( r t _ e r r _ t   ( * e x c e p t i o n _ h a n d l e ) ( v o i d   * c o n t e x t ) ) ;  
  
 / *  
   *   d e l a y   i n t e r f a c e s  
   * /  
 v o i d   r t _ h w _ u s _ d e l a y ( r t _ u i n t 3 2 _ t   u s ) ;  
  
 # d e f i n e   R T _ D E F I N E _ S P I N L O C K ( x )  
 # d e f i n e   R T _ D E C L A R E _ S P I N L O C K ( x )         r t _ u b a s e _ t   x  
  
 # d e f i n e   r t _ h w _ s p i n _ l o c k ( l o c k )           * ( l o c k )   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( )  
 # d e f i n e   r t _ h w _ s p i n _ u n l o c k ( l o c k )       r t _ h w _ i n t e r r u p t _ e n a b l e ( * ( l o c k ) )  
  
 # i f d e f   _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
 # e n d i f  